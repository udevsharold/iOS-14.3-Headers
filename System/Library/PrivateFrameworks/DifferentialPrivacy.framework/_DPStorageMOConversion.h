/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSManagedObjectID;


@protocol _DPStorageMOConversion
@property (nonatomic,retain) NSManagedObjectID * objectId; 
@property (assign,nonatomic) BOOL submitted; 
@required
+(id)entityName;
+(id)createRecordFromManagedObject:(id)arg1;
-(id)entityName;
-(NSManagedObjectID *)objectId;
-(BOOL)copyToManagedObject:(id)arg1;
-(void)setObjectId:(id)arg1;
-(BOOL)submitted;
-(BOOL)copyFromManagedObject:(id)arg1;
-(void)setSubmitted:(BOOL)arg1;

@end
