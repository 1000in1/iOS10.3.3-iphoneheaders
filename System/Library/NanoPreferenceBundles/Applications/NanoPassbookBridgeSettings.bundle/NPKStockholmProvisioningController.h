/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoPassbookBridgeSettings.bundle/NanoPassbookBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassbookBridgeSettings/NPKCompanionAgentConnectionDelegate.h>
#import <libobjc.A.dylib/PKPassbookSettingsDataSource.h>
#import <libobjc.A.dylib/PKPaymentDataProvider.h>

@protocol PKPaymentDataProviderDelegate;
@class NSString, NPKPassbookPaymentSetupDelegate, NSHashTable, NPKCompanionAgentConnection, PKPaymentOptionsDefaults;

@interface NPKStockholmProvisioningController : NSObject <NPKCompanionAgentConnectionDelegate, PKPassbookSettingsDataSource, PKPaymentDataProvider> {

	char _lastProvidedIsRestricted;
	id<PKPaymentDataProviderDelegate> _delegate;
	NPKPassbookPaymentSetupDelegate* _paymentSetupDelegate;
	NSHashTable* _dataProviderDelegates;
	NPKCompanionAgentConnection* _connection;
	PKPaymentOptionsDefaults* _defaults;

}

@property (nonatomic,retain) NPKPassbookPaymentSetupDelegate * paymentSetupDelegate;              //@synthesize paymentSetupDelegate=_paymentSetupDelegate - In the implementation block
@property (nonatomic,retain) NSHashTable * dataProviderDelegates;                                 //@synthesize dataProviderDelegates=_dataProviderDelegates - In the implementation block
@property (assign,nonatomic) char lastProvidedIsRestricted;                                       //@synthesize lastProvidedIsRestricted=_lastProvidedIsRestricted - In the implementation block
@property (nonatomic,retain) NPKCompanionAgentConnection * connection;                            //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) PKPaymentOptionsDefaults * defaults;                                 //@synthesize defaults=_defaults - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char isDeviceInRestrictedMode; 
@property (nonatomic,readonly) NSString * secureElementIdentifier; 
@property (nonatomic,readonly) char secureElementIsProductionSigned; 
@property (nonatomic,retain) NSString * defaultPaymentPassIdentifier; 
@property (nonatomic,readonly) char isPaymentHandoffDisabled; 
@property (assign,nonatomic,__weak) id<PKPaymentDataProviderDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
-(void)setDataProviderDelegates:(NSHashTable *)arg1 ;
-(char)showPassState;
-(void)setPaymentSetupDelegate:(NPKPassbookPaymentSetupDelegate *)arg1 ;
-(NPKPassbookPaymentSetupDelegate *)paymentSetupDelegate;
-(id)initWithPaymentSetupDelegate:(id)arg1 ;
-(char)isRegistrationSupported;
-(char)isSettingsControllerReloadNecessary;
-(void)preflightForLocalPassWithCompletion:(/*^block*/id)arg1 ;
-(char)_deviceInRestrictedMode;
-(void)setLastProvidedIsRestricted:(char)arg1 ;
-(id)_currentExpressPassBookmarkWithExpressMode:(id)arg1 ;
-(id)_expressPassInformationwithPassUniqueID:(id)arg1 expressMode:(id)arg2 ;
-(id)_paymentApplicationWithPass:(id)arg1 expressMode:(id)arg2 ;
-(char)lastProvidedIsRestricted;
-(NSHashTable *)dataProviderDelegates;
-(void)setDelegate:(id<PKPaymentDataProviderDelegate>)arg1 ;
-(id<PKPaymentDataProviderDelegate>)delegate;
-(NPKCompanionAgentConnection *)connection;
-(void)setConnection:(NPKCompanionAgentConnection *)arg1 ;
-(void)setDefaults:(PKPaymentOptionsDefaults *)arg1 ;
-(void)_accessDelegatesWithHandler:(/*^block*/id)arg1 ;
-(char)supportsNotificationsForPass:(id)arg1 ;
-(id)deviceName;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(id)webService;
-(id)setupDelegate;
-(id)passLibraryDataProvider;
-(id)paymentDataProvider;
-(id)optionsDelegate;
-(char)hasFelicaSecureElement;
-(id)setupFeaturedNetworksForDevice;
-(char)secureElementIsProductionSigned;
-(char)deviceInRestrictedMode;
-(NSString *)defaultPaymentPassIdentifier;
-(id)expressPassInformationForMode:(id)arg1 ;
-(void)setPaymentHandoffDisabled:(char)arg1 ;
-(char)isPaymentHandoffDisabled;
-(char)deviceSupportsInAppPayments;
-(void)setDefaultPaymentPassIdentifier:(NSString *)arg1 ;
-(void)setExpressWithPassInformation:(id)arg1 visibleViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDefaultExpressFelicaTransitPassIdentifier:(id)arg1 visibleViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)felicaStateWithPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(char)arg2 ;
-(PKPaymentOptionsDefaults *)defaults;
-(char)isDeviceInRestrictedMode;
-(NSString *)secureElementIdentifier;
-(id)secureElementID;
-(void)updateRegionSupportIfNecessary;
-(void)setDefaultPaymentApplication:(id)arg1 forPassUniqueIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)defaultPaymentApplicationForPassUniqueIdentifier:(id)arg1 ;
-(void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned)arg2 withBackingData:(unsigned)arg3 limit:(int)arg4 completion:(/*^block*/id)arg5 ;
-(char)supportsExpressModeForExpressPassType:(int)arg1 ;
-(id)expressPassesInformation;
-(char)supportsMessagesForPass:(id)arg1 ;
-(char)supportsTransactionsForPass:(id)arg1 ;
-(void)deletePaymentTransactionWithIdentifier:(id)arg1 forPassWithUniqueIdentifier:(id)arg2 ;
-(char)supportsInAppPaymentsForPass:(id)arg1 ;
-(id)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1 ;
-(void)startServiceModeForPassWithUniqueIdentifier:(id)arg1 visibleViewController:(id)arg2 ;
@end

