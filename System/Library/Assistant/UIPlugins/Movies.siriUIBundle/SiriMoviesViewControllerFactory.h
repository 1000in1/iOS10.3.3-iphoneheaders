/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/Movies.siriUIBundle/Movies
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AcousticId/SiriUISnippetPlugin.h>

@protocol SVSOrientationDelegate;
@class NSString;

@interface SiriMoviesViewControllerFactory : NSObject <SiriUISnippetPlugin> {

	id<SVSOrientationDelegate> _orientationDelegate;

}

@property (getter=_orientationDelegate,nonatomic,retain) id<SVSOrientationDelegate> orientationDelegate;              //@synthesize orientationDelegate=_orientationDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_orientationDelegate;
-(void)setOrientationDelegate:(id<SVSOrientationDelegate>)arg1 ;
-(id)viewControllerForSnippet:(id)arg1 error:(id*)arg2 ;
-(id)disambiguationItemForListItem:(id)arg1 disambiguationKey:(id)arg2 ;
@end

