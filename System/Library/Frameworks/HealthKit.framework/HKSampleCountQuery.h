/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKSampleCountQueryClientInterface.h>

@class NSSet, NSString;

@interface HKSampleCountQuery : HKQuery <HKSampleCountQueryClientInterface> {

	/*^block*/id _resultsHandler;
	NSSet* _sampleQueryDescriptions;

}

@property (nonatomic,copy,readonly) NSSet * sampleQueryDescriptions;              //@synthesize sampleQueryDescriptions=_sampleQueryDescriptions - In the implementation block
@property (nonatomic,copy,readonly) NSSet * sampleTypes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInterfaceProtocol;
+(Class)configurationClass;
+(void)configureClientInterface:(id)arg1 ;
-(void)queue_validate;
-(id)initWithSampleQueryDescriptions:(id)arg1 resultsHandler:(/*^block*/id)arg2 ;
-(id)initWithSampleTypes:(id)arg1 predicate:(id)arg2 resultsHandler:(/*^block*/id)arg3 ;
-(void)client_deliverSampleCountDictionary:(id)arg1 forQuery:(id)arg2 ;
-(id)initWithSampleType:(id)arg1 predicate:(id)arg2 resultsHandler:(/*^block*/id)arg3 ;
-(void)queue_deliverError:(id)arg1 ;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)queue_populateConfiguration:(id)arg1 ;
-(NSSet *)sampleTypes;
-(NSSet *)sampleQueryDescriptions;
@end

