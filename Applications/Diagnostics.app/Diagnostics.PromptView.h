/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Diagnostics.app/Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Diagnostics/Diagnostics-Structs.h>
#import <Diagnostics/Diagnostics.BaseView.h>

@interface Diagnostics.PromptView : Diagnostics.BaseView {

	 titleFontSize;
	 subtitleFontSize;
	 promptSpacing;
	 promptStackView;
	 titleLabel;
	 subtitleLabel;
	 buttonStackView;
	 containerLayoutUpdateHandler;
	 hasExplicitHeight;
	 actions;

}

@property (copy,nonatomic) id containerLayoutUpdateHandler; 
@property (assign,nonatomic) char hasExplicitHeight; 
-(void)setupViewAttributes;
-(id)containerLayoutUpdateHandler;
-(void)setContainerLayoutUpdateHandler:(id)arg1 ;
-(char)hasExplicitHeight;
-(void)setHasExplicitHeight:(char)arg1 ;
-(void)setupViewHierarchy;
-(void)setupViewLayoutConstraints;
-(void)waitWithTitle:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

