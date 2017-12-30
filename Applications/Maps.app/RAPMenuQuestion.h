/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/RAPQuestion.h>
#import <Maps/RAPMenu.h>

@protocol RAPMenuItem;
@class NSArray, NSMutableDictionary, RAPQuestion, NSString;

@interface RAPMenuQuestion : RAPQuestion <RAPMenu> {

	NSArray* _mainMenuItems;
	NSArray* _mainMenuQuestionCategories;
	NSMutableDictionary* _menuItemsByKind;
	NSArray* _allMenuItems;
	NSArray* _menuItems;
	RAPQuestion*<RAPMenuItem> _selectedMenuItem;

}

@property (nonatomic,retain) NSArray * menuItems;                                     //@synthesize menuItems=_menuItems - In the implementation block
@property (nonatomic,readonly) NSArray * mainMenuItems; 
@property (nonatomic,readonly) NSArray * mainMenuQuestionCategories; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int analyticTarget; 
@property (nonatomic,readonly) int backAction; 
@property (nonatomic,readonly) char shouldShowSubtitles; 
@property (nonatomic,readonly) char shouldShowIcons; 
@property (nonatomic,retain) RAPQuestion*<RAPMenuItem> selectedMenuItem;              //@synthesize selectedMenuItem=_selectedMenuItem - In the implementation block
+(id)localizedHeaderText;
+(id)menuForReport:(id)arg1 state:(id)arg2 ;
-(int)analyticTarget;
-(NSArray *)mainMenuQuestionCategories;
-(char)canDisplayMenuItemForQuestionCategory:(int)arg1 ;
-(id)followUpQuestionForCategory:(int)arg1 ;
-(char)_isRecursivelyComplete;
-(void)_fillSubmittableProblem:(id)arg1 ;
-(unsigned)numberOfMenuItemsInSection:(unsigned)arg1 ;
-(id)menuItemForIndexPath:(id)arg1 ;
-(id)allMenuItems;
-(char)shouldShowSubtitles;
-(char)shouldShowIcons;
-(void)resetMenu;
-(NSArray *)mainMenuItems;
-(id)menuItemWithFollowUpQuestionCategory:(int)arg1 ;
-(void)removeMenuItemForFollowUpQuestionCategory:(int)arg1 ;
-(id)_newMenuItemWithFollowUpQuestionCategory:(int)arg1 ;
-(unsigned)numberOfSections;
-(void)setMenuItems:(NSArray *)arg1 ;
-(NSArray *)menuItems;
-(void)setSelectedMenuItem:(RAPQuestion*<RAPMenuItem>)arg1 ;
-(RAPQuestion*<RAPMenuItem>)selectedMenuItem;
-(char)isComplete;
@end

