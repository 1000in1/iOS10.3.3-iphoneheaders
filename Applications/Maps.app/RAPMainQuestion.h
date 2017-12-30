/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/RAPMenuQuestion.h>

@protocol RAPMenuItem;
@class NSArray, RAPQuestion;

@interface RAPMainQuestion : RAPMenuQuestion {

	NSArray* _homeWorkCategories;
	NSArray* _homeWorkMenuItems;
	RAPQuestion*<RAPMenuItem> _otherIssueMenuItem;

}

@property (nonatomic,retain) NSArray * homeWorkMenuItems;                               //@synthesize homeWorkMenuItems=_homeWorkMenuItems - In the implementation block
@property (nonatomic,retain) RAPQuestion*<RAPMenuItem> otherIssueMenuItem;              //@synthesize otherIssueMenuItem=_otherIssueMenuItem - In the implementation block
+(id)localizedHeaderText;
-(int)analyticTarget;
-(id)mainMenuQuestionCategories;
-(char)canDisplayMenuItemForQuestionCategory:(int)arg1 ;
-(id)followUpQuestionForCategory:(int)arg1 ;
-(void)_fillSubmittableProblem:(id)arg1 ;
-(id)_alternateMapViewContext;
-(char)shouldShowSubtitles;
-(char)shouldShowIcons;
-(void)resetMenu;
-(NSArray *)homeWorkMenuItems;
-(RAPQuestion*<RAPMenuItem>)otherIssueMenuItem;
-(char)_getDirectionsMapItemsForStart:(out id*)arg1 end:(out id*)arg2 ;
-(void)setHomeWorkMenuItems:(NSArray *)arg1 ;
-(void)setOtherIssueMenuItem:(RAPQuestion*<RAPMenuItem>)arg1 ;
-(id)menuItems;
@end

