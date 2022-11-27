#include "./index.h"

void mainPanel(void)
{

    lv_obj_t *containnerPanel = lv_obj_create(lv_scr_act());
    lv_obj_t *label = lv_label_create(lv_scr_act());
    lv_label_set_text(label, "hello world");
    lv_obj_t *panel1 = lv_obj_create(lv_scr_act());
    lv_obj_t *panel2 = lv_obj_create(lv_scr_act());

    lv_obj_t *panel3 = lv_obj_create(lv_scr_act());
    lv_obj_t *panel4 = lv_obj_create(lv_scr_act());
   // lv_obj_t *panel5 = lv_obj_create(lv_scr_act());
    // lv_obj_set_size(containnerPanel,100,100);
    lv_obj_set_align(containnerPanel, LV_ALIGN_CENTER);

    lv_obj_align_to(panel1, containnerPanel, LV_ALIGN_OUT_TOP_MID, 0, 0);
    lv_obj_align_to(panel2, containnerPanel, LV_ALIGN_OUT_RIGHT_MID, 0, 0);
    lv_obj_align_to(panel3, containnerPanel, LV_ALIGN_OUT_BOTTOM_MID, 0, 0);
    lv_obj_align_to(panel4, containnerPanel, LV_ALIGN_OUT_LEFT_MID, 0, 0);

    lv_obj_align_to(label, panel1, LV_ALIGN_OUT_TOP_MID, 0, 0);

    // lv_obj_set_pos(containnerPanel,30,30);
}