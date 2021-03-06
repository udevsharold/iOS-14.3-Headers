/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKObject.h>

@class EKObjectID, NSString, NSURL;

@interface EKNotification : EKObject

@property (nonatomic,readonly) EKObjectID * objectID; 
@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (nonatomic,copy) NSString * UUID; 
@property (nonatomic,copy) NSURL * hostURL; 
+(Class)frozenClass;
+(id)knownRelationshipSingleValueKeys;
-(void)setExternalID:(NSString *)arg1 ;
-(EKObjectID *)objectID;
-(void)setUUID:(NSString *)arg1 ;
-(NSString *)externalModificationTag;
-(id)calendar;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(NSString *)UUID;
-(NSURL *)hostURL;
-(void)setHostURL:(NSURL *)arg1 ;
-(NSString *)externalID;
-(BOOL)commit:(id*)arg1 ;
@end

