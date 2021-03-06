/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <SafariServices/_SFActivityItemProvider.h>

@class TabDocument;

@interface ActionPanelActivityItemProvider : _SFActivityItemProvider {

	TabDocument* _tabDocument;

}

@property (nonatomic,readonly) TabDocument * tabDocument;              //@synthesize tabDocument=_tabDocument - In the implementation block
-(id)initWithTabDocument:(id)arg1 ;
-(TabDocument *)tabDocument;
-(id)initWithPlaceholderItem:(id)arg1 tabDocument:(id)arg2 ;
-(id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(CGSize)arg3 ;
-(id)initWithPlaceholderItem:(id)arg1 URL:(id)arg2 pageTitle:(id)arg3 ;
@end

