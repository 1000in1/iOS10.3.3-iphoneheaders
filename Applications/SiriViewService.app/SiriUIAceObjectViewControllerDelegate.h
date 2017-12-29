/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SiriUIAceObjectViewControllerDelegate <NSObject>
@required
-(void)siriViewController:(id)arg1 openURL:(id)arg2 completion:(/*^block*/id)arg3;
-(void)siriViewControllerHeightDidChange:(id)arg1 pinTopOfSnippet:(char)arg2;
-(id)persistentDataStoreForSiriViewController:(id)arg1;
-(char)siriViewController:(id)arg1 openURL:(id)arg2;
-(id)additionalSpeechInterpretationsForSiriViewController:(id)arg1;
-(id)updatedUserUtteranceForSiriViewController:(id)arg1;
-(id)siriViewController:(id)arg1 domainObjectForIdentifier:(id)arg2;
-(void)siriViewController:(id)arg1 setDomainObject:(id)arg2 forIdentifier:(id)arg3;
-(id)siriViewControllerEffectiveBundleForCoreLocation:(id)arg1;
-(CGSize*)siriViewControllerVisibleContentArea:(id)arg1;
-(void)siriViewControllerHeightDidChange:(id)arg1;
-(void)siriViewController:(id)arg1 setContentOffset:(float)arg2;
-(void)siriViewControllerHeightDidChange:(id)arg1 heightDifference:(float)arg2;
-(id)siriViewController:(id)arg1 filteredDisambiguationListItems:(id)arg2;
-(id)siriViewController:(id)arg1 disambiguationItemForListItem:(id)arg2 disambiguationKey:(id)arg3;
-(id)siriViewController:(id)arg1 listItemToPickInAutodisambiguationForListItems:(id)arg2;
-(void)siriViewController:(id)arg1 addSelectionResponse:(id)arg2;
-(void)siriViewController:(id)arg1 didHideVibrantView:(id)arg2;
-(void)siriSnippetViewController:(id)arg1 setStatusViewHidden:(char)arg2;
-(UIEdgeInsets*)siriViewControllerDisplayInsetsForVisibleSpace:(id)arg1;
-(float)siriSnippetViewControllerExpectedWidth:(id)arg1;
-(void)siriViewController:(id)arg1 sendGenericAceCommands:(id)arg2;
-(char)siriViewController:(id)arg1 openPunchOut:(id)arg2;
-(id)persistentStoreForSiriViewController:(id)arg1;
-(void)cancelRequestForSiriSnippetViewController:(id)arg1;
-(void)siriViewController:(id)arg1 performAceCommands:(id)arg2;
-(UIEdgeInsets*)siriViewControllerBackgroundInsets:(id)arg1;
-(float)siriViewControllerExpectedWidth:(id)arg1;

@end
