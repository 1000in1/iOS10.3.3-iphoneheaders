/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionReusableView.h>
#import <libobjc.A.dylib/SiriUIReusableView.h>

@class UILabel, NSString, SiriUISnippetViewController;

@interface ACAssistantAlternateProviderReusableHeader : UICollectionReusableView <SiriUIReusableView> {

	UILabel* _titleLabel;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) SiriUISnippetViewController * snippetViewController; 
+(float)defaultHeight;
+(id)reuseIdentifier;
+(id)elementKind;
-(void)configureWithText:(id)arg1 ;
@end

