/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Phoenix.framework/Phoenix
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString, NSDateFormatter;

@interface AXPhoenixMetadataLogger : NSObject {

	NSDate* _startTimestamp;
	NSString* _metadataFilePath;
	NSDateFormatter* _dateFormatter;

}

@property (nonatomic,retain) NSDate * startTimestamp;                      //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (nonatomic,retain) NSString * metadataFilePath;                  //@synthesize metadataFilePath=_metadataFilePath - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;              //@synthesize dateFormatter=_dateFormatter - In the implementation block
-(NSDate *)startTimestamp;
-(void)setStartTimestamp:(NSDate *)arg1 ;
-(NSDateFormatter *)dateFormatter;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(id)initWithMetadata:(id)arg1 ;
-(void)setMetadataFilePath:(NSString *)arg1 ;
-(id)_deviceModelName;
-(id)_orientationString;
-(id)_fullHardwareConfigurationString;
-(NSString *)metadataFilePath;
-(void)setMetadataFilePathUnderDirectory:(id)arg1 ;
-(void)writeMetadataToFileWithSensors:(id)arg1 withAnnotations:(id)arg2 withFalsePositivesMetadata:(id)arg3 ;
@end

