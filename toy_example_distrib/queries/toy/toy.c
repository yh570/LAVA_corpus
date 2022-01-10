#include "pirate_mark_lava.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#pragma pack(1)
#define MAGIC 0x4c415641

enum {
    TYPEA = 1,
    TYPEB = 2
};

typedef struct {
    uint32_t magic;     // Magic value
    uint32_t reserved;  // Reserved for future use
    uint16_t num_recs;  // How many entries?
    uint16_t flags;     // None used yet
    uint32_t timestamp; // Unix Time
} file_header;

typedef struct {
    char bar[16];
    uint32_t type;
    union {
        float fdata;
        uint32_t intdata;
    } data;
} file_entry;

void parse_header(FILE *f, file_header *hdr) {
    if (1 != ({if (((f)) && ((f)))  {vm_lava_query_buffer(((f)), sizeof(*((f))), 1, 3, 31, 1);
    }if (((f)))  {vm_lava_query_buffer(&((f)->__pad5), sizeof((f)->__pad5), 1, 4, 31, 1);
    }if (((f)))  {vm_lava_query_buffer(&((f)->_cur_column), sizeof((f)->_cur_column), 1, 5, 31, 1);
    }if (((f)))  {vm_lava_query_buffer(&((f)->_fileno), sizeof((f)->_fileno), 1, 6, 31, 1);
    }if (((f)))  {vm_lava_query_buffer(&((f)->_flags), sizeof((f)->_flags), 1, 7, 31, 1);
    }if (((f)))  {vm_lava_query_buffer(&((f)->_flags2), sizeof((f)->_flags2), 1, 8, 31, 1);
    }if (((f)))  {vm_lava_query_buffer(&((f)->_mode), sizeof((f)->_mode), 1, 9, 31, 1);
    }if (((f)))  {vm_lava_query_buffer(&((f)->_offset), sizeof((f)->_offset), 1, 10, 31, 1);
    }if (((f)))  {vm_lava_query_buffer(&((f)->_old_offset), sizeof((f)->_old_offset), 1, 11, 31, 1);
    }if (((f)))  {vm_lava_query_buffer(&((f)->_shortbuf), sizeof((f)->_shortbuf), 1, 12, 31, 1);
    }if (((f)))  {vm_lava_query_buffer(&((f)->_unused2), sizeof((f)->_unused2), 1, 13, 31, 1);
    }if (((f)))  {vm_lava_query_buffer(&((f)->_vtable_offset), sizeof((f)->_vtable_offset), 1, 14, 31, 1);
    }if (((hdr)) && ((hdr)))  {vm_lava_query_buffer(((hdr)), sizeof(*((hdr))), 1, 15, 31, 1);
    }if (((hdr)))  {vm_lava_query_buffer(&((hdr)->flags), sizeof((hdr)->flags), 1, 16, 31, 1);
    }if (((hdr)))  {vm_lava_query_buffer(&((hdr)->magic), sizeof((hdr)->magic), 1, 17, 31, 1);
    }if (((hdr)))  {vm_lava_query_buffer(&((hdr)->num_recs), sizeof((hdr)->num_recs), 1, 18, 31, 1);
    }if (((hdr)))  {vm_lava_query_buffer(&((hdr)->reserved), sizeof((hdr)->reserved), 1, 19, 31, 1);
    }if (((hdr)))  {vm_lava_query_buffer(&((hdr)->timestamp), sizeof((hdr)->timestamp), 1, 20, 31, 1);
    }size_t kbcieiubweuhc846930886 = ({vm_lava_attack_point(1, 31, 2);
    size_t kbcieiubweuhc1804289383 = fread(hdr, sizeof(file_header), 1, f); kbcieiubweuhc1804289383;;});if (((f)) && ((f)))  {vm_lava_query_buffer(((f)), sizeof(*((f))), 1, 3, 31, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->__pad5), sizeof((f)->__pad5), 1, 4, 31, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_cur_column), sizeof((f)->_cur_column), 1, 5, 31, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_fileno), sizeof((f)->_fileno), 1, 6, 31, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_flags), sizeof((f)->_flags), 1, 7, 31, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_flags2), sizeof((f)->_flags2), 1, 8, 31, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_mode), sizeof((f)->_mode), 1, 9, 31, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_offset), sizeof((f)->_offset), 1, 10, 31, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_old_offset), sizeof((f)->_old_offset), 1, 11, 31, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_shortbuf), sizeof((f)->_shortbuf), 1, 12, 31, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_unused2), sizeof((f)->_unused2), 1, 13, 31, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_vtable_offset), sizeof((f)->_vtable_offset), 1, 14, 31, 2);
}if (((hdr)) && ((hdr)))  {vm_lava_query_buffer(((hdr)), sizeof(*((hdr))), 1, 15, 31, 2);
}if (((hdr)))  {vm_lava_query_buffer(&((hdr)->flags), sizeof((hdr)->flags), 1, 16, 31, 2);
}if (((hdr)))  {vm_lava_query_buffer(&((hdr)->magic), sizeof((hdr)->magic), 1, 17, 31, 2);
}if (((hdr)))  {vm_lava_query_buffer(&((hdr)->num_recs), sizeof((hdr)->num_recs), 1, 18, 31, 2);
}if (((hdr)))  {vm_lava_query_buffer(&((hdr)->reserved), sizeof((hdr)->reserved), 1, 19, 31, 2);
}if (((hdr)))  {vm_lava_query_buffer(&((hdr)->timestamp), sizeof((hdr)->timestamp), 1, 20, 31, 2);
}vm_lava_query_buffer(&(kbcieiubweuhc846930886), sizeof(kbcieiubweuhc846930886), 1, 21, 31, 2);
kbcieiubweuhc846930886;}))
        ({vm_lava_attack_point(1, 32, 22);
        exit(1);});
    if (hdr->magic != MAGIC)
        ({vm_lava_attack_point(1, 34, 22);
        exit(1);});
}

file_entry * parse_record(FILE *f) {
    file_entry *ret = (file_entry *) ({vm_lava_attack_point(1, 38, 23);
    void * kbcieiubweuhc719885386 = malloc(sizeof(file_entry)); kbcieiubweuhc719885386;;});
    if (1 != ({if (((f)) && ((f)))  {vm_lava_query_buffer(((f)), sizeof(*((f))), 1, 3, 39, 1);
    }if (((f)))  {vm_lava_query_buffer(&((f)->__pad5), sizeof((f)->__pad5), 1, 4, 39, 1);
    }if (((f)))  {vm_lava_query_buffer(&((f)->_cur_column), sizeof((f)->_cur_column), 1, 5, 39, 1);
    }if (((f)))  {vm_lava_query_buffer(&((f)->_fileno), sizeof((f)->_fileno), 1, 6, 39, 1);
    }if (((f)))  {vm_lava_query_buffer(&((f)->_flags), sizeof((f)->_flags), 1, 7, 39, 1);
    }if (((f)))  {vm_lava_query_buffer(&((f)->_flags2), sizeof((f)->_flags2), 1, 8, 39, 1);
    }if (((f)))  {vm_lava_query_buffer(&((f)->_mode), sizeof((f)->_mode), 1, 9, 39, 1);
    }if (((f)))  {vm_lava_query_buffer(&((f)->_offset), sizeof((f)->_offset), 1, 10, 39, 1);
    }if (((f)))  {vm_lava_query_buffer(&((f)->_old_offset), sizeof((f)->_old_offset), 1, 11, 39, 1);
    }if (((f)))  {vm_lava_query_buffer(&((f)->_shortbuf), sizeof((f)->_shortbuf), 1, 12, 39, 1);
    }if (((f)))  {vm_lava_query_buffer(&((f)->_unused2), sizeof((f)->_unused2), 1, 13, 39, 1);
    }if (((f)))  {vm_lava_query_buffer(&((f)->_vtable_offset), sizeof((f)->_vtable_offset), 1, 14, 39, 1);
    }if (((ret)) && ((ret)))  {vm_lava_query_buffer(((ret)), sizeof(*((ret))), 1, 24, 39, 1);
    }if (((ret)))  {vm_lava_query_buffer(&((ret)->bar), sizeof((ret)->bar), 1, 25, 39, 1);
    }if (((ret)))  {vm_lava_query_buffer(&((ret)->data), sizeof((ret)->data), 1, 26, 39, 1);
    }if (((ret)))  {vm_lava_query_buffer(&((ret)->type), sizeof((ret)->type), 1, 27, 39, 1);
    }size_t kbcieiubweuhc1189641421 = ({vm_lava_attack_point(1, 39, 2);
    size_t kbcieiubweuhc596516649 = fread(ret, sizeof(file_entry), 1, f); kbcieiubweuhc596516649;;});if (((f)) && ((f)))  {vm_lava_query_buffer(((f)), sizeof(*((f))), 1, 3, 39, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->__pad5), sizeof((f)->__pad5), 1, 4, 39, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_cur_column), sizeof((f)->_cur_column), 1, 5, 39, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_fileno), sizeof((f)->_fileno), 1, 6, 39, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_flags), sizeof((f)->_flags), 1, 7, 39, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_flags2), sizeof((f)->_flags2), 1, 8, 39, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_mode), sizeof((f)->_mode), 1, 9, 39, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_offset), sizeof((f)->_offset), 1, 10, 39, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_old_offset), sizeof((f)->_old_offset), 1, 11, 39, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_shortbuf), sizeof((f)->_shortbuf), 1, 12, 39, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_unused2), sizeof((f)->_unused2), 1, 13, 39, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_vtable_offset), sizeof((f)->_vtable_offset), 1, 14, 39, 2);
}if (((ret)) && ((ret)))  {vm_lava_query_buffer(((ret)), sizeof(*((ret))), 1, 24, 39, 2);
}if (((ret)))  {vm_lava_query_buffer(&((ret)->bar), sizeof((ret)->bar), 1, 25, 39, 2);
}if (((ret)))  {vm_lava_query_buffer(&((ret)->data), sizeof((ret)->data), 1, 26, 39, 2);
}if (((ret)))  {vm_lava_query_buffer(&((ret)->type), sizeof((ret)->type), 1, 27, 39, 2);
}vm_lava_query_buffer(&(kbcieiubweuhc1189641421), sizeof(kbcieiubweuhc1189641421), 1, 28, 39, 2);
kbcieiubweuhc1189641421;}))
        ({vm_lava_attack_point(1, 40, 22);
        exit(1);});
    return ret;
}

void consume_record(file_entry *ent) {
    ({if (((ent)) && ((ent)))  {vm_lava_query_buffer(((ent)), sizeof(*((ent))), 1, 30, 45, 1);
    }if (((ent)))  {vm_lava_query_buffer(&((ent)->bar), sizeof((ent)->bar), 1, 31, 45, 1);
    }if (((ent)))  {vm_lava_query_buffer(&((ent)->data), sizeof((ent)->data), 1, 32, 45, 1);
    }if (((ent)))  {vm_lava_query_buffer(&((ent)->type), sizeof((ent)->type), 1, 33, 45, 1);
    }int kbcieiubweuhc1102520059 = ({vm_lava_attack_point(1, 45, 29);
    int kbcieiubweuhc783368690 = printf("Entry: bar = %s, ", ent->bar); kbcieiubweuhc783368690;;});if (((ent)) && ((ent)))  {vm_lava_query_buffer(((ent)), sizeof(*((ent))), 1, 30, 45, 2);
}if (((ent)))  {vm_lava_query_buffer(&((ent)->bar), sizeof((ent)->bar), 1, 31, 45, 2);
}if (((ent)))  {vm_lava_query_buffer(&((ent)->data), sizeof((ent)->data), 1, 32, 45, 2);
}if (((ent)))  {vm_lava_query_buffer(&((ent)->type), sizeof((ent)->type), 1, 33, 45, 2);
}vm_lava_query_buffer(&(kbcieiubweuhc1102520059), sizeof(kbcieiubweuhc1102520059), 1, 34, 45, 2);
kbcieiubweuhc1102520059;});
    if (ent->type == TYPEA) {
        ({if (((ent)) && ((ent)))  {vm_lava_query_buffer(((ent)), sizeof(*((ent))), 1, 30, 47, 1);
        }if (((ent)))  {vm_lava_query_buffer(&((ent)->bar), sizeof((ent)->bar), 1, 31, 47, 1);
        }if (((ent)))  {vm_lava_query_buffer(&((ent)->data), sizeof((ent)->data), 1, 32, 47, 1);
        }if (((ent)))  {vm_lava_query_buffer(&((ent)->type), sizeof((ent)->type), 1, 33, 47, 1);
        }int kbcieiubweuhc1967513926 = ({vm_lava_attack_point(1, 47, 29);
        int kbcieiubweuhc2044897763 = printf("fdata = %f\n", ent->data.fdata); kbcieiubweuhc2044897763;;});if (((ent)) && ((ent)))  {vm_lava_query_buffer(((ent)), sizeof(*((ent))), 1, 30, 47, 2);
}if (((ent)))  {vm_lava_query_buffer(&((ent)->bar), sizeof((ent)->bar), 1, 31, 47, 2);
}if (((ent)))  {vm_lava_query_buffer(&((ent)->data), sizeof((ent)->data), 1, 32, 47, 2);
}if (((ent)))  {vm_lava_query_buffer(&((ent)->type), sizeof((ent)->type), 1, 33, 47, 2);
}vm_lava_query_buffer(&(kbcieiubweuhc1967513926), sizeof(kbcieiubweuhc1967513926), 1, 35, 47, 2);
kbcieiubweuhc1967513926;});
    }
    else if (ent->type == TYPEB) {
        ({if (((ent)) && ((ent)))  {vm_lava_query_buffer(((ent)), sizeof(*((ent))), 1, 30, 50, 1);
        }if (((ent)))  {vm_lava_query_buffer(&((ent)->bar), sizeof((ent)->bar), 1, 31, 50, 1);
        }if (((ent)))  {vm_lava_query_buffer(&((ent)->data), sizeof((ent)->data), 1, 32, 50, 1);
        }if (((ent)))  {vm_lava_query_buffer(&((ent)->type), sizeof((ent)->type), 1, 33, 50, 1);
        }int kbcieiubweuhc1540383426 = ({vm_lava_attack_point(1, 50, 29);
        int kbcieiubweuhc1365180540 = printf("intdata = %u\n", ent->data.intdata); kbcieiubweuhc1365180540;;});if (((ent)) && ((ent)))  {vm_lava_query_buffer(((ent)), sizeof(*((ent))), 1, 30, 50, 2);
}if (((ent)))  {vm_lava_query_buffer(&((ent)->bar), sizeof((ent)->bar), 1, 31, 50, 2);
}if (((ent)))  {vm_lava_query_buffer(&((ent)->data), sizeof((ent)->data), 1, 32, 50, 2);
}if (((ent)))  {vm_lava_query_buffer(&((ent)->type), sizeof((ent)->type), 1, 33, 50, 2);
}vm_lava_query_buffer(&(kbcieiubweuhc1540383426), sizeof(kbcieiubweuhc1540383426), 1, 36, 50, 2);
kbcieiubweuhc1540383426;});
    }
    else {
        ({if (((ent)) && ((ent)))  {vm_lava_query_buffer(((ent)), sizeof(*((ent))), 1, 30, 53, 1);
        }if (((ent)))  {vm_lava_query_buffer(&((ent)->bar), sizeof((ent)->bar), 1, 31, 53, 1);
        }if (((ent)))  {vm_lava_query_buffer(&((ent)->data), sizeof((ent)->data), 1, 32, 53, 1);
        }if (((ent)))  {vm_lava_query_buffer(&((ent)->type), sizeof((ent)->type), 1, 33, 53, 1);
        }int kbcieiubweuhc1303455736 = ({vm_lava_attack_point(1, 53, 29);
        int kbcieiubweuhc304089172 = printf("Unknown type %x\n", ent->type); kbcieiubweuhc304089172;;});if (((ent)) && ((ent)))  {vm_lava_query_buffer(((ent)), sizeof(*((ent))), 1, 30, 53, 2);
}if (((ent)))  {vm_lava_query_buffer(&((ent)->bar), sizeof((ent)->bar), 1, 31, 53, 2);
}if (((ent)))  {vm_lava_query_buffer(&((ent)->data), sizeof((ent)->data), 1, 32, 53, 2);
}if (((ent)))  {vm_lava_query_buffer(&((ent)->type), sizeof((ent)->type), 1, 33, 53, 2);
}vm_lava_query_buffer(&(kbcieiubweuhc1303455736), sizeof(kbcieiubweuhc1303455736), 1, 37, 53, 2);
kbcieiubweuhc1303455736;});
        ({vm_lava_attack_point(1, 54, 22);
        exit(1);});
    }
    free(ent);
}

int main(int argc, char **argv) {
    FILE *f = ({if (((argv)) && ((argv)))  {vm_lava_query_buffer(((argv)), sizeof(*((argv))), 1, 39, 60, 1);
    }FILE * kbcieiubweuhc1726956429 = ({vm_lava_attack_point(1, 60, 38);
    FILE * kbcieiubweuhc294702567 = fopen(argv[1], "rb"); kbcieiubweuhc294702567;;});if (((argv)) && ((argv)))  {vm_lava_query_buffer(((argv)), sizeof(*((argv))), 1, 39, 60, 2);
}if ((kbcieiubweuhc1726956429) && (kbcieiubweuhc1726956429))  {vm_lava_query_buffer((kbcieiubweuhc1726956429), sizeof(*(kbcieiubweuhc1726956429)), 1, 40, 60, 2);
}kbcieiubweuhc1726956429;});
    file_header head;

    ({if (((f)) && ((f)))  {vm_lava_query_buffer(((f)), sizeof(*((f))), 1, 3, 63, 1);
    }if (((f)))  {vm_lava_query_buffer(&((f)->__pad5), sizeof((f)->__pad5), 1, 4, 63, 1);
    }if (((f)))  {vm_lava_query_buffer(&((f)->_cur_column), sizeof((f)->_cur_column), 1, 5, 63, 1);
    }if (((f)))  {vm_lava_query_buffer(&((f)->_fileno), sizeof((f)->_fileno), 1, 6, 63, 1);
    }if (((f)))  {vm_lava_query_buffer(&((f)->_flags), sizeof((f)->_flags), 1, 7, 63, 1);
    }if (((f)))  {vm_lava_query_buffer(&((f)->_flags2), sizeof((f)->_flags2), 1, 8, 63, 1);
    }if (((f)))  {vm_lava_query_buffer(&((f)->_mode), sizeof((f)->_mode), 1, 9, 63, 1);
    }if (((f)))  {vm_lava_query_buffer(&((f)->_offset), sizeof((f)->_offset), 1, 10, 63, 1);
    }if (((f)))  {vm_lava_query_buffer(&((f)->_old_offset), sizeof((f)->_old_offset), 1, 11, 63, 1);
    }if (((f)))  {vm_lava_query_buffer(&((f)->_shortbuf), sizeof((f)->_shortbuf), 1, 12, 63, 1);
    }if (((f)))  {vm_lava_query_buffer(&((f)->_unused2), sizeof((f)->_unused2), 1, 13, 63, 1);
    }if (((f)))  {vm_lava_query_buffer(&((f)->_vtable_offset), sizeof((f)->_vtable_offset), 1, 14, 63, 1);
    }vm_lava_query_buffer(&((head)), sizeof((head)), 1, 42, 63, 1);
    vm_lava_query_buffer(&((head).flags), sizeof((head).flags), 1, 43, 63, 1);
    vm_lava_query_buffer(&((head).magic), sizeof((head).magic), 1, 44, 63, 1);
    vm_lava_query_buffer(&((head).num_recs), sizeof((head).num_recs), 1, 45, 63, 1);
    vm_lava_query_buffer(&((head).reserved), sizeof((head).reserved), 1, 46, 63, 1);
    vm_lava_query_buffer(&((head).timestamp), sizeof((head).timestamp), 1, 47, 63, 1);
    ({vm_lava_attack_point(1, 63, 41);
    parse_header(f, &head);});if (((f)) && ((f)))  {vm_lava_query_buffer(((f)), sizeof(*((f))), 1, 3, 63, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->__pad5), sizeof((f)->__pad5), 1, 4, 63, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_cur_column), sizeof((f)->_cur_column), 1, 5, 63, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_fileno), sizeof((f)->_fileno), 1, 6, 63, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_flags), sizeof((f)->_flags), 1, 7, 63, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_flags2), sizeof((f)->_flags2), 1, 8, 63, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_mode), sizeof((f)->_mode), 1, 9, 63, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_offset), sizeof((f)->_offset), 1, 10, 63, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_old_offset), sizeof((f)->_old_offset), 1, 11, 63, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_shortbuf), sizeof((f)->_shortbuf), 1, 12, 63, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_unused2), sizeof((f)->_unused2), 1, 13, 63, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_vtable_offset), sizeof((f)->_vtable_offset), 1, 14, 63, 2);
}vm_lava_query_buffer(&((head)), sizeof((head)), 1, 42, 63, 2);
vm_lava_query_buffer(&((head).flags), sizeof((head).flags), 1, 43, 63, 2);
vm_lava_query_buffer(&((head).magic), sizeof((head).magic), 1, 44, 63, 2);
vm_lava_query_buffer(&((head).num_recs), sizeof((head).num_recs), 1, 45, 63, 2);
vm_lava_query_buffer(&((head).reserved), sizeof((head).reserved), 1, 46, 63, 2);
vm_lava_query_buffer(&((head).timestamp), sizeof((head).timestamp), 1, 47, 63, 2);
});
    ({vm_lava_query_buffer(&((head)), sizeof((head)), 1, 42, 64, 1);
    vm_lava_query_buffer(&((head).flags), sizeof((head).flags), 1, 43, 64, 1);
    vm_lava_query_buffer(&((head).magic), sizeof((head).magic), 1, 44, 64, 1);
    vm_lava_query_buffer(&((head).num_recs), sizeof((head).num_recs), 1, 45, 64, 1);
    vm_lava_query_buffer(&((head).reserved), sizeof((head).reserved), 1, 46, 64, 1);
    vm_lava_query_buffer(&((head).timestamp), sizeof((head).timestamp), 1, 47, 64, 1);
    int kbcieiubweuhc233665123 = ({vm_lava_attack_point(1, 64, 29);
    int kbcieiubweuhc278722862 = printf("File timestamp: %u\n", head.timestamp); kbcieiubweuhc278722862;;});vm_lava_query_buffer(&((head)), sizeof((head)), 1, 42, 64, 2);
vm_lava_query_buffer(&((head).flags), sizeof((head).flags), 1, 43, 64, 2);
vm_lava_query_buffer(&((head).magic), sizeof((head).magic), 1, 44, 64, 2);
vm_lava_query_buffer(&((head).num_recs), sizeof((head).num_recs), 1, 45, 64, 2);
vm_lava_query_buffer(&((head).reserved), sizeof((head).reserved), 1, 46, 64, 2);
vm_lava_query_buffer(&((head).timestamp), sizeof((head).timestamp), 1, 47, 64, 2);
vm_lava_query_buffer(&(kbcieiubweuhc233665123), sizeof(kbcieiubweuhc233665123), 1, 48, 64, 2);
kbcieiubweuhc233665123;});

    unsigned i;
    for (i = 0; i < head.num_recs; i++) {
        file_entry *ent = ({if (((f)) && ((f)))  {vm_lava_query_buffer(((f)), sizeof(*((f))), 1, 3, 68, 1);
        }if (((f)))  {vm_lava_query_buffer(&((f)->__pad5), sizeof((f)->__pad5), 1, 4, 68, 1);
        }if (((f)))  {vm_lava_query_buffer(&((f)->_cur_column), sizeof((f)->_cur_column), 1, 5, 68, 1);
        }if (((f)))  {vm_lava_query_buffer(&((f)->_fileno), sizeof((f)->_fileno), 1, 6, 68, 1);
        }if (((f)))  {vm_lava_query_buffer(&((f)->_flags), sizeof((f)->_flags), 1, 7, 68, 1);
        }if (((f)))  {vm_lava_query_buffer(&((f)->_flags2), sizeof((f)->_flags2), 1, 8, 68, 1);
        }if (((f)))  {vm_lava_query_buffer(&((f)->_mode), sizeof((f)->_mode), 1, 9, 68, 1);
        }if (((f)))  {vm_lava_query_buffer(&((f)->_offset), sizeof((f)->_offset), 1, 10, 68, 1);
        }if (((f)))  {vm_lava_query_buffer(&((f)->_old_offset), sizeof((f)->_old_offset), 1, 11, 68, 1);
        }if (((f)))  {vm_lava_query_buffer(&((f)->_shortbuf), sizeof((f)->_shortbuf), 1, 12, 68, 1);
        }if (((f)))  {vm_lava_query_buffer(&((f)->_unused2), sizeof((f)->_unused2), 1, 13, 68, 1);
        }if (((f)))  {vm_lava_query_buffer(&((f)->_vtable_offset), sizeof((f)->_vtable_offset), 1, 14, 68, 1);
        }file_entry * kbcieiubweuhc468703135 = ({vm_lava_attack_point(1, 68, 49);
        file_entry * kbcieiubweuhc2145174067 = parse_record(f); kbcieiubweuhc2145174067;;});if (((f)) && ((f)))  {vm_lava_query_buffer(((f)), sizeof(*((f))), 1, 3, 68, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->__pad5), sizeof((f)->__pad5), 1, 4, 68, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_cur_column), sizeof((f)->_cur_column), 1, 5, 68, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_fileno), sizeof((f)->_fileno), 1, 6, 68, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_flags), sizeof((f)->_flags), 1, 7, 68, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_flags2), sizeof((f)->_flags2), 1, 8, 68, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_mode), sizeof((f)->_mode), 1, 9, 68, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_offset), sizeof((f)->_offset), 1, 10, 68, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_old_offset), sizeof((f)->_old_offset), 1, 11, 68, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_shortbuf), sizeof((f)->_shortbuf), 1, 12, 68, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_unused2), sizeof((f)->_unused2), 1, 13, 68, 2);
}if (((f)))  {vm_lava_query_buffer(&((f)->_vtable_offset), sizeof((f)->_vtable_offset), 1, 14, 68, 2);
}if ((kbcieiubweuhc468703135) && (kbcieiubweuhc468703135))  {vm_lava_query_buffer((kbcieiubweuhc468703135), sizeof(*(kbcieiubweuhc468703135)), 1, 50, 68, 2);
}kbcieiubweuhc468703135;});
        ({if (((ent)) && ((ent)))  {vm_lava_query_buffer(((ent)), sizeof(*((ent))), 1, 30, 69, 1);
        }if (((ent)))  {vm_lava_query_buffer(&((ent)->bar), sizeof((ent)->bar), 1, 31, 69, 1);
        }if (((ent)))  {vm_lava_query_buffer(&((ent)->data), sizeof((ent)->data), 1, 32, 69, 1);
        }if (((ent)))  {vm_lava_query_buffer(&((ent)->type), sizeof((ent)->type), 1, 33, 69, 1);
        }({vm_lava_attack_point(1, 69, 51);
        consume_record(ent);});if (((ent)) && ((ent)))  {vm_lava_query_buffer(((ent)), sizeof(*((ent))), 1, 30, 69, 2);
}if (((ent)))  {vm_lava_query_buffer(&((ent)->bar), sizeof((ent)->bar), 1, 31, 69, 2);
}if (((ent)))  {vm_lava_query_buffer(&((ent)->data), sizeof((ent)->data), 1, 32, 69, 2);
}if (((ent)))  {vm_lava_query_buffer(&((ent)->type), sizeof((ent)->type), 1, 33, 69, 2);
}});
    }
    return 0;
}
