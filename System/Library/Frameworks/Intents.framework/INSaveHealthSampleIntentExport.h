/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INDateComponentsRange, NSArray, HKUnit;


@protocol INSaveHealthSampleIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INDateComponentsRange * recordDate; 
@property (assign,nonatomic) long long objectType; 
@property (nonatomic,copy) NSArray * values; 
@property (nonatomic,copy) HKUnit * unit; 
@property (nonatomic,copy) NSArray * sampleMetadatas; 
@required
-(void)setValues:(id)arg1;
-(NSArray *)values;
-(id)init;
-(void)setUnit:(id)arg1;
-(HKUnit *)unit;
-(NSArray *)sampleMetadatas;
-(void)setSampleMetadatas:(id)arg1;
-(void)setRecordDate:(id)arg1;
-(void)setObjectType:(long long)arg1;
-(INDateComponentsRange *)recordDate;
-(long long)objectType;

@end

