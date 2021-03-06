/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SystemStatusServer.framework/SystemStatusServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SystemStatusServer/SystemStatusServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, NSArray;

@interface STTelephonyCarrierBundleInfo : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding> {

	BOOL _LTEConnectionShows4G;
	BOOL _reinitiatingActivationDisabled;
	NSString* _customerServicePhoneNumber;
	NSArray* _disabledApplicationIDs;
	NSString* _carrierName;
	NSString* _homeCountryCode;

}

@property (nonatomic,readonly) BOOL LTEConnectionShows4G;                                                                //@synthesize LTEConnectionShows4G=_LTEConnectionShows4G - In the implementation block
@property (getter=isReinitiatingActivationDisabled,nonatomic,readonly) BOOL reinitiatingActivationDisabled;              //@synthesize reinitiatingActivationDisabled=_reinitiatingActivationDisabled - In the implementation block
@property (nonatomic,copy,readonly) NSString * customerServicePhoneNumber;                                               //@synthesize customerServicePhoneNumber=_customerServicePhoneNumber - In the implementation block
@property (nonatomic,copy,readonly) NSArray * disabledApplicationIDs;                                                    //@synthesize disabledApplicationIDs=_disabledApplicationIDs - In the implementation block
@property (nonatomic,copy,readonly) NSString * carrierName;                                                              //@synthesize carrierName=_carrierName - In the implementation block
@property (nonatomic,copy,readonly) NSString * homeCountryCode;                                                          //@synthesize homeCountryCode=_homeCountryCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)disabledApplicationIDs;
-(NSString *)homeCountryCode;
-(id)initWithCarrierBundleInfo:(id)arg1 ;
-(NSString *)customerServicePhoneNumber;
-(BOOL)LTEConnectionShows4G;
-(id)init;
-(NSString *)carrierName;
-(BOOL)isReinitiatingActivationDisabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)succinctDescriptionBuilder;
@end

