/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Feedback Assistant iOS/FBAFileCleanupOperation.h>

@class NSSet;

@interface FBAResponseIDFileCleanupOperation : FBAFileCleanupOperation {

	char _mode;
	NSSet* _responseIDs;

}

@property (copy) NSSet * responseIDs;              //@synthesize responseIDs=_responseIDs - In the implementation block
@property (assign) char mode;                      //@synthesize mode=_mode - In the implementation block
-(id)responseIDForDirectoryName:(id)arg1 ;
-(NSSet *)responseIDs;
-(id)initWithResponseIDs:(id)arg1 deleteMode:(char)arg2 ;
-(void)setResponseIDs:(NSSet *)arg1 ;
-(void)setMode:(char)arg1 ;
-(char)mode;
-(void)main;
@end

