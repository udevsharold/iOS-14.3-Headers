/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DPDataRecorder_DPDataRecorderKeyProperties;
@interface _DPBitValueRecorder : NSObject {

	id<_DPDataRecorder><_DPDataRecorderKeyProperties> _recorder;

}

@property (nonatomic,readonly) id<_DPDataRecorder><_DPDataRecorderKeyProperties> recorder;              //@synthesize recorder=_recorder - In the implementation block
-(id<_DPDataRecorder><_DPDataRecorderKeyProperties>)recorder;
-(id)init;
-(BOOL)record:(id)arg1 ;
-(id)initWithKey:(id)arg1 ;
-(id)description;
-(BOOL)recordBitVectors:(id)arg1 metadata:(id)arg2 ;
-(id)initWithKey:(id)arg1 databaseDirectoryPath:(id)arg2 readOnly:(BOOL)arg3 ;
-(BOOL)record:(id)arg1 metadata:(id)arg2 ;
@end

