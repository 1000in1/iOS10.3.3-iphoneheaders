/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIColor, TabOverviewItemLayoutInfo, TabStackTitleView, TabOverview;

@interface TabOverviewItem : NSObject {

	char _hidden;
	char _closing;
	NSString* _title;
	UIColor* _titleColor;
	NSString* _stackName;
	TabOverviewItemLayoutInfo* _layoutInfo;
	TabStackTitleView* _stackTitleView;
	TabOverview* _tabOverview;

}

@property (assign,nonatomic) char closing;                                        //@synthesize closing=_closing - In the implementation block
@property (nonatomic,retain) TabOverviewItemLayoutInfo * layoutInfo;              //@synthesize layoutInfo=_layoutInfo - In the implementation block
@property (nonatomic,retain) TabStackTitleView * stackTitleView;                  //@synthesize stackTitleView=_stackTitleView - In the implementation block
@property (assign,nonatomic,__weak) TabOverview * tabOverview;                    //@synthesize tabOverview=_tabOverview - In the implementation block
@property (assign,nonatomic) char hidden;                                         //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,copy) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) UIColor * titleColor;                                  //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,copy) NSString * stackName;                                  //@synthesize stackName=_stackName - In the implementation block
-(void)setClosing:(char)arg1 ;
-(TabOverview *)tabOverview;
-(void)setTabOverview:(TabOverview *)arg1 ;
-(void)setStackName:(NSString *)arg1 ;
-(NSString *)stackName;
-(char)closing;
-(TabStackTitleView *)stackTitleView;
-(void)setStackTitleView:(TabStackTitleView *)arg1 ;
-(void)setHidden:(char)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitleColor:(UIColor *)arg1 ;
-(UIColor *)titleColor;
-(TabOverviewItemLayoutInfo *)layoutInfo;
-(void)setLayoutInfo:(TabOverviewItemLayoutInfo *)arg1 ;
-(char)hidden;
@end

