/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSError;


@protocol MOVStreamWriterStateContext <NSObject>
@property (retain) NSArray * movMetadataItems; 
@property (retain) NSError * criticalError; 
@required
-(void)setCriticalError:(id)arg1;
-(void)processFinishRecording;
-(NSError *)criticalError;
-(void)setMovMetadataItems:(id)arg1;
-(void)finishAVWriter;
-(void)executePrepareToRecordWithMovieMetadata:(id)arg1;
-(void)finishAndDrainFifoFirst;
-(void)deleteMOVFile;
-(void)deleteFileOnCancel;
-(void)processCancelRecording;
-(void)processForceFinishRecording;
-(NSArray *)movMetadataItems;

@end

