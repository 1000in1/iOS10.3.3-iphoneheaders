/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:22 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Pasteboard.framework/Support/pasted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PBAuditTokenInfo : NSObject {

	char _allowedToQueryBundleID;
	char _allowedAccessInBackground;
	char _allowedToPerformJanitorialTasks;
	int _pid;
	NSString* _bundleID;
	NSString* _teamID;

}

@property (assign,nonatomic) int pid;                                                                                    //@synthesize pid=_pid - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                                                                        //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * teamID;                                                                          //@synthesize teamID=_teamID - In the implementation block
@property (assign,getter=isAllowedToQueryBundleID,nonatomic) char allowedToQueryBundleID;                                //@synthesize allowedToQueryBundleID=_allowedToQueryBundleID - In the implementation block
@property (assign,getter=isAllowedAccessInBackground,nonatomic) char allowedAccessInBackground;                          //@synthesize allowedAccessInBackground=_allowedAccessInBackground - In the implementation block
@property (assign,getter=isAllowedToPerformJanitorialTasks,nonatomic) char allowedToPerformJanitorialTasks;              //@synthesize allowedToPerformJanitorialTasks=_allowedToPerformJanitorialTasks - In the implementation block
-(char)isAllowedToQueryBundleID;
-(char)isAllowedToPerformJanitorialTasks;
-(void)setAllowedToQueryBundleID:(char)arg1 ;
-(char)isAllowedAccessInBackground;
-(void)setAllowedAccessInBackground:(char)arg1 ;
-(void)setAllowedToPerformJanitorialTasks:(char)arg1 ;
-(void)setPid:(int)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setTeamID:(NSString *)arg1 ;
-(NSString *)teamID;
-(int)pid;
@end
