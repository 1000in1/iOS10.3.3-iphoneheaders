/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:32 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/XPCServices/com.apple.Safari.SocialHelper.xpc/com.apple.Safari.SocialHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SocialResponseFilter : NSObject
+(id)socialResponseFilterForSocialServiceType:(id)arg1 ;
-(void)filterResponse:(id)arg1 intoRecordDictionaries:(id*)arg2 recordRangeNewest:(id*)arg3 recordRangeNewestCreationDate:(id*)arg4 recordRangeOldest:(id*)arg5 recordRangeOldestCreationDate:(id*)arg6 ;
-(char)repostSuccessFromResponse:(id)arg1 ;
-(id)allowedURLStringsInString:(id)arg1 ;
-(char)allowsURL:(id)arg1 ;
@end

