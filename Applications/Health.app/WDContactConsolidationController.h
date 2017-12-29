/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKHealthStore, _HKMedicalIDData, SOSContactsManager, UIViewController, UIAlertController;

@interface WDContactConsolidationController : NSObject {

	HKHealthStore* _healthStore;
	_HKMedicalIDData* _medicalIDData;
	SOSContactsManager* _sosContactsManager;
	UIViewController* _presentingViewController;
	UIAlertController* _consolidationAlertController;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) HKHealthStore * healthStore;                                          //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) _HKMedicalIDData * medicalIDData;                                     //@synthesize medicalIDData=_medicalIDData - In the implementation block
@property (nonatomic,retain) SOSContactsManager * sosContactsManager;                              //@synthesize sosContactsManager=_sosContactsManager - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;                   //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (assign,nonatomic,__weak) UIAlertController * consolidationAlertController;              //@synthesize consolidationAlertController=_consolidationAlertController - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) char isPresentingConsolidationAlert; 
-(SOSContactsManager *)sosContactsManager;
-(void)_consolidateSOSContactsWithMedicalIDContacts;
-(UIAlertController *)consolidationAlertController;
-(void)setConsolidationAlertController:(UIAlertController *)arg1 ;
-(void)setSosContactsManager:(SOSContactsManager *)arg1 ;
-(void)checkAlertNecessity;
-(void)presentContactsConsolidationAlert;
-(void)_showLearnMoreViewController;
-(id)initWithHealthStore:(id)arg1 presentingViewController:(id)arg2 ;
-(char)isPresentingConsolidationAlert;
-(void)presentContactConsolidationAlertWithCompletionHandler:(/*^block*/id)arg1 ;
-(UIViewController *)presentingViewController;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(_HKMedicalIDData *)medicalIDData;
-(void)setMedicalIDData:(_HKMedicalIDData *)arg1 ;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
@end
