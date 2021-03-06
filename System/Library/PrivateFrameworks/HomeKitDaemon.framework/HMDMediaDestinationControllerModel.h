/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSArray, NSNumber, NSUUID, NSString;

@interface HMDMediaDestinationControllerModel : HMDBackingStoreModelObject <HMFLogging>

@property (copy) NSArray * availableDestinationModelIdentifierStrings; 
@property (retain) NSNumber * type; 
@property (retain) NSArray * availableDestinationModelIdentifiers; 
@property (retain) NSUUID * destinationModelIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)properties;
-(id)attributeDescriptions;
-(id)privateDescription;
-(NSString *)description;
-(id)logIdentifier;
-(id)initWithData:(id)arg1 changeType:(unsigned long long)arg2 ;
-(void)setAvailableDestinationModelIdentifiers:(NSArray *)arg1 ;
-(NSArray *)availableDestinationModelIdentifiers;
@end

