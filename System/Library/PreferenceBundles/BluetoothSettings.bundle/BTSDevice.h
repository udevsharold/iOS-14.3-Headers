/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BTSDevice : NSObject

@property (assign,getter=isHealthDevice,nonatomic) BOOL healthDevice; 
@property (getter=isMyDevice,nonatomic,readonly) BOOL myDevice; 
@property (assign,getter=isCTKDDevice,nonatomic) BOOL ctkdDevice; 
-(BOOL)connect;
-(void)disconnect;
-(id)productName;
-(long long)compare:(id)arg1 ;
-(BOOL)paired;
-(void)unpair;
-(unsigned long long)hash;
-(id)identifier;
-(BOOL)connected;
-(BOOL)isiPad;
-(BOOL)isEqual:(id)arg1 ;
-(id)name;
-(BOOL)ancsAuthorized;
-(BOOL)isLimitedConnectivityDevice;
-(id)classicDevice;
-(BOOL)isHealthDevice;
-(void)setHealthDevice:(BOOL)arg1 ;
-(void)setCtkdDevice:(BOOL)arg1 ;
-(BOOL)isCTKDDevice;
-(BOOL)isMyDevice;
-(BOOL)cloudPaired;
-(BOOL)isApplePencil:(int*)arg1 ;
-(void)setANCSAuthorization:(BOOL)arg1 ;
-(BOOL)supportsANCS;
-(BOOL)isTemporaryPairedDevice;
@end

