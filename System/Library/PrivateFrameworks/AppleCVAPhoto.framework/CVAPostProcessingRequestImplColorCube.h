/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CVAPostProcessingRequest.h>

@class NSData, NSString;

@interface CVAPostProcessingRequestImplColorCube : NSObject <CVAPostProcessingRequest> {

	BOOL _isMono;
	NSData* _backgroundColorCube;
	NSData* _foregroundColorCube;
	NSData* _singleColorCube;

}

@property (retain) NSData * backgroundColorCube;                    //@synthesize backgroundColorCube=_backgroundColorCube - In the implementation block
@property (retain) NSData * foregroundColorCube;                    //@synthesize foregroundColorCube=_foregroundColorCube - In the implementation block
@property (retain) NSData * singleColorCube;                        //@synthesize singleColorCube=_singleColorCube - In the implementation block
@property (assign) BOOL isMono;                                     //@synthesize isMono=_isMono - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isMono;
-(NSData *)backgroundColorCube;
-(NSData *)foregroundColorCube;
-(void)setBackgroundColorCube:(NSData *)arg1 ;
-(void)setForegroundColorCube:(NSData *)arg1 ;
-(NSData *)singleColorCube;
-(void)setSingleColorCube:(NSData *)arg1 ;
-(void)setIsMono:(BOOL)arg1 ;
@end

