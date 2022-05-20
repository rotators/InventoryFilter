
/* Defines */
#define xPos             (10)
#define yPos             (14)
// button size
#define btnWidth         (32)
#define bHeight          (20)
#define btnHeight        (bHeight + 3)

#define menu_width       (50)
#define menu_heigh       (190)

#define mainPCXFile      "PCX\\InvFilterArt\\main.pcx"
#define buttonPCXFile    "PCX\\InvFilterArt\\btn_"

#define weight_cur_max   weight + "/" + maxWeight
#define weight_percent   mstr_inventry(30) + " " + weight + "%"

#define win_flags        (WIN_FLAG_TRANSPARENT + WIN_FLAG_MOVEONTOP)

#define swap_loot_win_x  (0)
#define swap_loot_win_y  (-36)
#define swap_brtr_win_x  (245)
#define swap_brtr_win_y  (480)

#define swap_next_button                ((posXmouse > swap_win_x + 121 and posXmouse < swap_win_x + 145) and (posYmouse > swap_win_y + 8 and posYmouse < swap_win_y + 29))
#define swap_back_button                ((posXmouse > swap_win_x + 2   and posXmouse < swap_win_x + 26)  and (posYmouse > swap_win_y + 8 and posYmouse < swap_win_y + 29))

#define inven_filter_button_all         ((posXmouse > menu_x + xPos and posXmouse < menu_x + (xPos + btnWidth)) and (posYmouse > menu_y + yPos and posYmouse < menu_y + (yPos + 21)))
#define inven_filter_button_armor       ((posXmouse > menu_x + xPos and posXmouse < menu_x + (xPos + btnWidth)) and (posYmouse > menu_y + (yPos + btnHeight)) and posYmouse < menu_y + (yPos + 21 + btnHeight))
#define inven_filter_button_weapon      ((posXmouse > menu_x + xPos and posXmouse < menu_x + (xPos + btnWidth)) and (posYmouse > menu_y + (yPos + (btnHeight * 2)) and posYmouse < menu_y + (yPos + 21 + (btnHeight * 2))))
#define inven_filter_button_ammo        ((posXmouse > menu_x + xPos and posXmouse < menu_x + (xPos + btnWidth)) and (posYmouse > menu_y + (yPos + (btnHeight * 3)) and posYmouse < menu_y + (yPos + 21 + (btnHeight * 3))))
#define inven_filter_button_drug        ((posXmouse > menu_x + xPos and posXmouse < menu_x + (xPos + btnWidth)) and (posYmouse > menu_y + (yPos + (btnHeight * 4)) and posYmouse < menu_y + (yPos + 21 + (btnHeight * 4))))
#define inven_filter_button_tool        ((posXmouse > menu_x + xPos and posXmouse < menu_x + (xPos + btnWidth)) and (posYmouse > menu_y + (yPos + (btnHeight * 5)) and posYmouse < menu_y + (yPos + 21 + (btnHeight * 5))))
#define inven_filter_button_misc        ((posXmouse > menu_x + xPos and posXmouse < menu_x + (xPos + btnWidth)) and (posYmouse > menu_y + (yPos + (btnHeight * 6)) and posYmouse < menu_y + (yPos + 21 + (btnHeight * 6))))

#define inven_filter_trd_button_all     ((posXmouse > r_menu_x + xPos and posXmouse < r_menu_x + (xPos + btnWidth)) and (posYmouse > menu_y + yPos and posYmouse < menu_y + (yPos + 21)))
#define inven_filter_trd_button_armor   ((posXmouse > r_menu_x + xPos and posXmouse < r_menu_x + (xPos + btnWidth)) and (posYmouse > menu_y + (yPos + btnHeight) and posYmouse < menu_y + (yPos + 21 + btnHeight)))
#define inven_filter_trd_button_weapon  ((posXmouse > r_menu_x + xPos and posXmouse < r_menu_x + (xPos + btnWidth)) and (posYmouse > menu_y + (yPos + (btnHeight * 2)) and posYmouse < menu_y + (yPos + 21 + (btnHeight * 2))))
#define inven_filter_trd_button_ammo    ((posXmouse > r_menu_x + xPos and posXmouse < r_menu_x + (xPos + btnWidth)) and (posYmouse > menu_y + (yPos + (btnHeight * 3)) and posYmouse < menu_y + (yPos + 21 + (btnHeight * 3))))
#define inven_filter_trd_button_drug    ((posXmouse > r_menu_x + xPos and posXmouse < r_menu_x + (xPos + btnWidth)) and (posYmouse > menu_y + (yPos + (btnHeight * 4)) and posYmouse < menu_y + (yPos + 21 + (btnHeight * 4))))
#define inven_filter_trd_button_tool    ((posXmouse > r_menu_x + xPos and posXmouse < r_menu_x + (xPos + btnWidth)) and (posYmouse > menu_y + (yPos + (btnHeight * 5)) and posYmouse < menu_y + (yPos + 21 + (btnHeight * 5))))
#define inven_filter_trd_button_misc    ((posXmouse > r_menu_x + xPos and posXmouse < r_menu_x + (xPos + btnWidth)) and (posYmouse > menu_y + (yPos + (btnHeight * 6)) and posYmouse < menu_y + (yPos + 21 + (btnHeight * 6))))
