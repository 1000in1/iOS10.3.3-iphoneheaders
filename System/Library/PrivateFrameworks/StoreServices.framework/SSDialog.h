/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableDictionary, NSDictionary, NSString, SSDialogButton;

@interface SSDialog : NSObject {

	NSArray* _buttons;
	NSMutableDictionary* _dialogDictionary;

}

@property (nonatomic,readonly) NSDictionary * dialogDictionary; 
@property (nonatomic,readonly) NSString * dialogKind; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSArray * buttons; 
@property (nonatomic,retain) SSDialogButton * defaultButton; 
-(id)init;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(void)setDefaultButton:(SSDialogButton *)arg1 ;
-(SSDialogButton *)defaultButton;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(id)valueForProperty:(id)arg1 ;
-(NSArray *)buttons;
-(void)setButtons:(NSArray *)arg1 ;
-(NSDictionary *)dialogDictionary;
-(id)initWithDialogDictionary:(id)arg1 ;
-(NSString *)dialogKind;
@end
