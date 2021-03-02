/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFContentItem.h>

@class INRideStatus;

@interface WFRideStatusContentItem : WFContentItem

@property (nonatomic,readonly) INRideStatus * rideStatus; 
+(id)typeDescription;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)countDescription;
-(INRideStatus *)rideStatus;
-(id)pickupLocation;
-(id)dropOffLocation;
-(id)rideOptionName;
-(id)estimatedPickupDate;
-(id)estimatedDropOffDate;
-(id)maximumPrice;
-(id)minimumPrice;
-(id)disclaimerMessage;
-(id)driver;
-(id)vehicleDescription;
@end
