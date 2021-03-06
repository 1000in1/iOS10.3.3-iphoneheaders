/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@class HFRoomItemProvider, HFReorderableHomeKitItemList;

@interface HORoomPageItemManager : HFItemManager {

	HFRoomItemProvider* _roomItemProvider;

}

@property (nonatomic,retain) HFRoomItemProvider * roomItemProvider;                             //@synthesize roomItemProvider=_roomItemProvider - In the implementation block
@property (nonatomic,readonly) HFReorderableHomeKitItemList * reorderableRoomList; 
-(void)setRoomItemProvider:(HFRoomItemProvider *)arg1 ;
-(HFRoomItemProvider *)roomItemProvider;
-(HFReorderableHomeKitItemList *)reorderableRoomList;
-(/*^block*/id)_comparatorForSectionIdentifier:(id)arg1 ;
-(void)_createItemProvidersWithHome:(id)arg1 ;
-(id)_itemProviders;
-(id)_itemForSorting;
-(id)_styleForItem:(id)arg1 ;
@end

