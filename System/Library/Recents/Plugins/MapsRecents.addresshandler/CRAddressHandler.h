/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:39:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Recents/Plugins/MapsRecents.addresshandler/MapsRecents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRAddressHandler <NSObject>
@required
-(id)supportedAddressKinds;
-(id)syncKeyForAddress:(id)arg1 kind:(id)arg2;
-(id)externalAddressFromAddress:(id)arg1 kind:(id)arg2;
-(id)addressFromExternalAddress:(id)arg1 kind:(id)arg2;

@end

