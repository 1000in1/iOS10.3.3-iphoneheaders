/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MKMapItem, RAPTransitLine;


@protocol RAPSnippetProtocol <NSObject>
@property (nonatomic,readonly) int snippetStyle; 
@property (nonatomic,readonly) MKMapItem * snippetMapItem; 
@property (nonatomic,readonly) RAPTransitLine * snippetTransitLine; 
@optional
-(MKMapItem *)snippetMapItem;
-(RAPTransitLine *)snippetTransitLine;

@required
-(int)snippetStyle;

@end

