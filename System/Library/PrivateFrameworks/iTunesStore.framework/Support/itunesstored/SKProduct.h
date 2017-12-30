/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:02 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDecimalNumber, NSLocale, NSArray;

@interface SKProduct : NSObject {

	id _internal;

}

@property (setter=_setLocaleIdentifier:,getter=_localeIdentifier,nonatomic,copy) NSString * _localeIdentifier; 
@property (nonatomic,readonly) NSString * localizedDescription; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSDecimalNumber * price; 
@property (nonatomic,readonly) NSLocale * priceLocale; 
@property (nonatomic,readonly) NSString * productIdentifier; 
@property (getter=isDownloadable,nonatomic,readonly) char downloadable; 
@property (nonatomic,readonly) NSArray * downloadContentLengths; 
@property (nonatomic,readonly) NSString * downloadContentVersion; 
-(id)init;
-(void)dealloc;
-(NSString *)localizedDescription;
-(NSString *)localizedTitle;
-(NSDecimalNumber *)price;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(NSArray *)downloadContentLengths;
-(NSString *)downloadContentVersion;
-(NSLocale *)priceLocale;
-(NSString *)_localeIdentifier;
-(void)_setContentVersion:(id)arg1 ;
-(void)_setDownloadContentLengths:(id)arg1 ;
-(void)_setDownloadable:(char)arg1 ;
-(void)_setLocaleIdentifier:(id)arg1 ;
-(void)_setLocalizedDescription:(id)arg1 ;
-(void)_setLocalizedTitle:(id)arg1 ;
-(void)_setPriceLocale:(id)arg1 ;
-(void)_setProductIdentifier:(id)arg1 ;
-(void)_setPrice:(id)arg1 ;
-(char)isDownloadable;
-(NSString *)productIdentifier;
@end

