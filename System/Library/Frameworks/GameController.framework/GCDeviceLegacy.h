/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSString;


@protocol GCDeviceLegacy <NSObject>
@property (nonatomic,readonly) NSArray * hidServices; 
@property (assign,getter=areAllHIDDevicesConnected,nonatomic) BOOL allHIDDevicesConnected; 
@property (assign,getter=isPublished,nonatomic) BOOL published; 
@property (nonatomic,readonly) NSString * productCategory; 
@required
-(void)handleEvent:(IOHIDEventRef)arg1;
-(void)setPublished:(BOOL)arg1;
-(BOOL)isPublished;
-(NSString *)productCategory;
-(NSArray *)hidServices;
-(BOOL)areAllHIDDevicesConnected;
-(void)setAllHIDDevicesConnected:(BOOL)arg1;
-(void)addServiceRefsWithDevice:(id)arg1;
-(void)addServiceRef:(id)arg1;
-(BOOL)hasServiceRef:(IOHIDServiceClientRef)arg1;
-(void)removeServiceRef:(IOHIDServiceClientRef)arg1;
-(void)clearServiceRef;
-(id)initWithServiceRef:(IOHIDServiceClientRef)arg1;

@end
