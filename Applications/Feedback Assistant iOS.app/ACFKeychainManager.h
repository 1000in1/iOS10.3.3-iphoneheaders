/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Feedback Assistant iOS/ACFKeychainManagerProtocol.h>

@class NSString;

@interface ACFKeychainManager : NSObject <ACFKeychainManagerProtocol> {

	NSString* _usedAccessGroup;

}

@property (nonatomic,retain) NSString * usedAccessGroup;                  //@synthesize usedAccessGroup=_usedAccessGroup - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * obtainAccessGroup; 
@property (nonatomic,readonly) NSString * sharedAccessGroup; 
-(NSString *)sharedAccessGroup;
-(id)universalAccessGroup;
-(long)secAddItemWithAttributes:(id)arg1 result:(id*)arg2 ;
-(NSString *)obtainAccessGroup;
-(void)setUsedAccessGroup:(NSString *)arg1 ;
-(void)dumpResults:(id)arg1 printAttributes:(char)arg2 ;
-(id)searchItemWithInfo:(id)arg1 ;
-(void)dumpResults:(id)arg1 ;
-(long)secItemCopyMatchingWithAttributes:(id)arg1 result:(id*)arg2 ;
-(long)storeItemWithInfo:(id)arg1 share:(char)arg2 result:(id*)arg3 ;
-(char)removeItemWithInfo:(id)arg1 ;
-(NSString *)usedAccessGroup;
@end
