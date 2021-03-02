/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/USBHost.transport/USBHost
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AccessoryEAInterface;

@interface EAUSBBuffer : NSObject {

	char* _bufPtr;
	unsigned long long _bufferLength;
	int _usbError;
	AccessoryEAInterface* _eaInterface;
	char* _readPtr;
	char* _writePtr;
	unsigned long long _writeAttempts;

}

@property (assign,nonatomic,__weak) AccessoryEAInterface * eaInterface;              //@synthesize eaInterface=_eaInterface - In the implementation block
@property (assign) int usbError;                                                     //@synthesize usbError=_usbError - In the implementation block
@property (nonatomic,readonly) char* readPtr;                                        //@synthesize readPtr=_readPtr - In the implementation block
@property (nonatomic,readonly) char* writePtr;                                       //@synthesize writePtr=_writePtr - In the implementation block
@property (nonatomic,readonly) unsigned long long writeAttempts;                     //@synthesize writeAttempts=_writeAttempts - In the implementation block
@property (nonatomic,readonly) unsigned long long dataLength; 
@property (nonatomic,readonly) unsigned long long writeSpaceRemaining; 
-(unsigned long long)dataLength;
-(void)reset;
-(void)dealloc;
-(char*)writePtr;
-(char*)readPtr;
-(id)initWithSession:(id)arg1 bufferSize:(unsigned long long)arg2 ;
-(unsigned long long)writeSpaceRemaining;
-(void)moveReadPtr:(unsigned long long)arg1 ;
-(void)moveWritePtr:(unsigned long long)arg1 ;
-(void)attemptWrite;
-(AccessoryEAInterface *)eaInterface;
-(void)setEaInterface:(AccessoryEAInterface *)arg1 ;
-(int)usbError;
-(void)setUsbError:(int)arg1 ;
-(unsigned long long)writeAttempts;
@end
