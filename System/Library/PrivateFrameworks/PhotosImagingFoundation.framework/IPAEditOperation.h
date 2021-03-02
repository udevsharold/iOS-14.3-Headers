/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSUUID;

@interface IPAEditOperation : NSObject <NSObject, NSCopying> {

	NSUUID* _UUID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)presetifyAdjustment:(id)arg1 ;
-(void)setUUID:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)UUID;
-(id)autoIdentifier;
-(id)settingsDictionary;
-(id)identifier;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)debugDescription;
-(id)initWithOperation:(id)arg1 ;
-(id)archivalRepresentation;
-(id)initWithSettingsDictionary:(id)arg1 ;
-(BOOL)isEqualToOperation:(id)arg1 ;
@end
