/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, STCoreOrganization, NSArray, NSData;

@interface STCoreTransportPayload : NSManagedObject

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * type; 
@property (nonatomic,retain) STCoreOrganization * sourceOrganizationEnqueued; 
@property (nonatomic,retain) STCoreOrganization * sourceOrganizationPending; 
@property (nonatomic,retain) STCoreOrganization * sourceOrganizationRecent; 
@property (nonatomic,copy) NSArray * destinations; 
@property (nonatomic,copy) NSData * payloadData; 
+(id)fetchRequestForPayloadsOfType:(id)arg1 ;
+(id)fetchLastTransportPayloadInContext:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
+(id)fetchTransportPayloadContext:(id)arg1 withIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)setDestinations:(NSArray *)arg1 ;
-(id)description;
-(NSArray *)destinations;
@end
