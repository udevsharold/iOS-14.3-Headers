/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSDate, NSString, RTFingerprintMO;

@interface RTWiFiAccessPointMO : NSManagedObject

@property (nonatomic,copy) NSNumber * age; 
@property (nonatomic,copy) NSNumber * channel; 
@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSString * mac; 
@property (nonatomic,copy) NSNumber * rssi; 
@property (nonatomic,retain) RTFingerprintMO * fingerprint; 
+(id)fetchRequest;
+(id)managedObjectWithAccessPoint:(id)arg1 inManagedObjectContext:(id)arg2 ;
@end

