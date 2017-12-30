/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:09 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <mediaremoted/MRDAVRoute.h>

@class NSDictionary, MRDAVRouteExtendedInfo;

@interface MRDMediaServerAVRoute : MRDAVRoute {

	NSDictionary* _routeDescription;
	MRDAVRouteExtendedInfo* _extendedInfo;

}
-(char)canBeDefaultRoute;
-(char)isInputRoute;
-(char)isOutputRoute;
-(char)canBeDefaultSystemRoute;
-(char)matchesUniqueIdentifier:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)name;
-(id)dictionary;
-(id)type;
-(id)uniqueIdentifier;
-(char)isPicked;
-(id)extendedInfo;
-(id)modelName;
@end

