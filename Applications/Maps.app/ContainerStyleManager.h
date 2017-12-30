/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLayoutConstraint, ContainerViewController;

@interface ContainerStyleManager : NSObject {

	NSLayoutConstraint* _widthContainerViewConstraint;
	NSLayoutConstraint* _leadingContainerViewConstraint;
	NSLayoutConstraint* _trailingContainerViewConstraint;
	NSLayoutConstraint* _topContainerViewConstraint;
	NSLayoutConstraint* _bottomContainerViewConstraint;
	char _allowOnlyStandardStyle;
	unsigned _containerStyle;
	ContainerViewController* _containerViewController;

}

@property (assign,nonatomic,__weak) ContainerViewController * containerViewController;              //@synthesize containerViewController=_containerViewController - In the implementation block
@property (nonatomic,readonly) unsigned containerStyle;                                             //@synthesize containerStyle=_containerStyle - In the implementation block
@property (assign,nonatomic) char allowOnlyStandardStyle;                                           //@synthesize allowOnlyStandardStyle=_allowOnlyStandardStyle - In the implementation block
-(unsigned)containerStyle;
-(void)setAllowOnlyStandardStyle:(char)arg1 ;
-(char)allowOnlyStandardStyle;
-(void)configureStyleLayout;
-(void)setBottomConstraint;
-(float)containerWidth;
-(unsigned)layoutStyleForCurrentTraitsCollection;
-(void)updateLayoutStyle;
-(void)setContainerStyle:(unsigned)arg1 ;
-(float)_statusBarHeight;
-(void)createConstraints;
-(ContainerViewController *)containerViewController;
-(void)setContainerViewController:(ContainerViewController *)arg1 ;
-(id)initWithContainer:(id)arg1 ;
@end

