/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNUIPRLikenessResolver.h>

@protocol CNSchedulerProvider, CNUIPlaceholderProviderFactory;
@class CNContactStore, CNUIMeContactMonitor, NSString;

@interface CNUIPRLikenessLookup : NSObject <CNUIPRLikenessResolver> {

	long long _prohibitedSources;
	CNContactStore* _contactStore;
	id<CNSchedulerProvider> _schedulerProvider;
	CNUIMeContactMonitor* _meMonitor;
	id<CNUIPlaceholderProviderFactory> _placeholderProviderFactory;

}

@property (nonatomic,retain) CNUIMeContactMonitor * meMonitor;                                           //@synthesize meMonitor=_meMonitor - In the implementation block
@property (nonatomic,retain) id<CNUIPlaceholderProviderFactory> placeholderProviderFactory;              //@synthesize placeholderProviderFactory=_placeholderProviderFactory - In the implementation block
@property (assign,nonatomic) long long prohibitedSources;                                                //@synthesize prohibitedSources=_prohibitedSources - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore;                                            //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                                //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
+(id)observableFromLikenessProviderBlock:(/*^block*/id)arg1 withScheduler:(id)arg2 ;
+(id)contactFuture:(id)arg1 contactStore:(id)arg2 scheduler:(id)arg3 ;
+(id)basicMonogramObservableForContactFuture:(id)arg1 monogramColor:(id)arg2 ;
+(id)photoObservableWithPhotoFuture:(id)arg1 likenessFingerprint:(id)arg2 scheduler:(id)arg3 ;
+(id)basicMonogramObservableFromString:(id)arg1 color:(id)arg2 ;
-(BOOL)mayIncludeSource:(long long)arg1 ;
-(id)likenessesForContact:(id)arg1 workScheduler:(id)arg2 ;
-(id)photoFutureForContactFuture:(id)arg1 photoFuture:(id)arg2 allowingFallbackForMeCard:(BOOL)arg3 ;
-(id)initWithContactStore:(id)arg1 scheduler:(id)arg2 ;
-(id)likenessObservableForContact:(id)arg1 placeholderProviderFactory:(id)arg2 options:(id)arg3 workScheduler:(id)arg4 ;
-(id<CNUIPlaceholderProviderFactory>)placeholderProviderFactory;
-(void)setProhibitedSources:(long long)arg1 ;
-(id)contentObservableForContact:(id)arg1 placeholderProviderFactory:(id)arg2 options:(id)arg3 workScheduler:(id)arg4 ;
-(id)photoFutureForContactFuture:(id)arg1 scheduler:(id)arg2 ;
-(BOOL)isMeContact:(id)arg1 ;
-(long long)prohibitedSources;
-(id)resolveLikenessesForContacts:(id)arg1 workScheduler:(id)arg2 withContentHandler:(/*^block*/id)arg3 ;
-(CNUIMeContactMonitor *)meMonitor;
-(id)initWithContactStore:(id)arg1 schedulerProvider:(id)arg2 ;
-(id<CNSchedulerProvider>)schedulerProvider;
-(void)setMeMonitor:(CNUIMeContactMonitor *)arg1 ;
-(CNContactStore *)contactStore;
-(id)initWithContactStore:(id)arg1 schedulerProvider:(id)arg2 meMonitor:(id)arg3 ;
-(id)remoteImagesObservableWithContactFuture:(id)arg1 workScheduler:(id)arg2 ;
-(id)basicMonogramObservableWithContactFuture:(id)arg1 monogramColor:(id)arg2 ;
-(id)likenessesForContact:(id)arg1 options:(id)arg2 workScheduler:(id)arg3 ;
-(void)setPlaceholderProviderFactory:(id<CNUIPlaceholderProviderFactory>)arg1 ;
-(id)silhouetteWithPlaceholderProviderFactory:(id)arg1 workScheduler:(id)arg2 ;
-(id)loadingPlaceholderWithPlaceholderProviderFactory:(id)arg1 ;
-(id)blessedPhotoObservableWithFuture:(id)arg1 contact:(id)arg2 workScheduler:(id)arg3 ;
-(id)basicMonogramObservableFromString:(id)arg1 color:(id)arg2 ;
-(id)initWithContactStore:(id)arg1 scheduler:(id)arg2 meMonitor:(id)arg3 ;
@end
