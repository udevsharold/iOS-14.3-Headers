/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol PLUniformTypeIdentifierIdentity <NSObject>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) BOOL conformsToRawImage; 
@property (nonatomic,readonly) BOOL conformsToImage; 
@property (nonatomic,readonly) BOOL conformsToMovie; 
@property (getter=isPrimaryImageFormat,nonatomic,readonly) BOOL primaryImageFormat; 
@property (nonatomic,readonly) BOOL isPlayableVideo; 
@required
-(BOOL)isPlayableVideo;
-(BOOL)conformsToMovie;
-(BOOL)isPrimaryImageFormat;
-(NSString *)identifier;
-(BOOL)conformsToRawImage;
-(BOOL)conformsToImage;

@end

