/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMLibraryBooksDataSourceDelegate;
#import <com.apple.podcasts.SpotlightIndexExtension/com.apple.podcasts.SpotlightIndexExtension-Structs.h>
@interface IMLibraryBooksDataSource : NSObject {

	id<IMLibraryBooksDataSourceDelegate> _delegate;
	struct {
		unsigned hasWillChangeContent : 1;
		unsigned hasDidChangeSection : 1;
		unsigned hasDidChangeObject : 1;
		unsigned hasDidChangeContent : 1;
	}  _delegateFlags;

}

@property (assign,nonatomic) id<IMLibraryBooksDataSourceDelegate><NSObject> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)currentSectionNameKeyPath;
-(unsigned)numberOfObjectsInSection:(int)arg1 ;
-(id)objectsInSection:(int)arg1 ;
-(id)nameForSection:(int)arg1 ;
-(id)indexPathForObject:(id)arg1 ;
-(void)setDelegate:(id<IMLibraryBooksDataSourceDelegate><NSObject>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(id<IMLibraryBooksDataSourceDelegate><NSObject>)delegate;
-(id)allObjects;
-(unsigned)sectionsCount;
-(id)objectAtIndexPath:(id)arg1 ;
@end

