/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NNMKDirectoryProvider.h>
@class NSString;


@protocol NNMKDirectoryProvider <NSObject>
@property (nonatomic,retain) NSString * pairedDeviceRegistryPath; 
@required
-(void)setPairedDeviceRegistryPath:(id)arg1;
-(NSString *)pairedDeviceRegistryPath;

@end


@class NSString;

@interface NNMKDirectoryProvider : NSObject <NNMKDirectoryProvider>

@property (nonatomic,retain) NSString * pairedDeviceRegistryPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)removePairedDeviceRegistryPathFromUserDefaults;
-(void)setPairedDeviceRegistryPath:(NSString *)arg1 ;
-(NSString *)pairedDeviceRegistryPath;
@end

