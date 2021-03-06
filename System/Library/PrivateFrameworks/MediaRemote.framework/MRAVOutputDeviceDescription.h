/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, _MRAVOutputDeviceDescriptorProtobuf;

@interface MRAVOutputDeviceDescription : NSObject {

	unsigned _deviceType;
	unsigned _deviceSubtype;
	NSString* _uid;

}

@property (nonatomic,readonly) _MRAVOutputDeviceDescriptorProtobuf * descriptor; 
@property (nonatomic,readonly) unsigned deviceType;                                           //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) unsigned deviceSubtype;                                        //@synthesize deviceSubtype=_deviceSubtype - In the implementation block
@property (nonatomic,readonly) NSString * uid;                                                //@synthesize uid=_uid - In the implementation block
-(unsigned)deviceType;
-(NSString *)uid;
-(unsigned)deviceSubtype;
-(id)initWithDeviceType:(unsigned)arg1 deviceSubtype:(unsigned)arg2 uid:(id)arg3 ;
-(_MRAVOutputDeviceDescriptorProtobuf *)descriptor;
@end

