/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Feedback Assistant iOS/ACFLocalAuthenticationContextProtocol.h>

@class NSString, LAContext;

@interface ACFLocalAuthenticationContext : NSObject <ACFLocalAuthenticationContextProtocol> {

	LAContext* _context;
	NSString* _localizedReason;
	NSString* _localizedFallbackTitle;

}

@property (nonatomic,retain) LAContext * context;                          //@synthesize context=_context - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * localizedReason;                     //@synthesize localizedReason=_localizedReason - In the implementation block
@property (nonatomic,copy) NSString * localizedFallbackTitle;              //@synthesize localizedFallbackTitle=_localizedFallbackTitle - In the implementation block
-(void)dealloc;
-(void)reset;
-(LAContext *)context;
-(void)setContext:(LAContext *)arg1 ;
-(char)canEvaluatePolicy:(int)arg1 error:(id*)arg2 ;
-(void)setLocalizedReason:(NSString *)arg1 ;
-(void)setLocalizedFallbackTitle:(NSString *)arg1 ;
-(NSString *)localizedFallbackTitle;
-(NSString *)localizedReason;
-(void)evaluatePolicy:(int)arg1 completion:(/*^block*/id)arg2 ;
@end

