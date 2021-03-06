/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OCDDelayedMedia.h>

@class NSData;

@interface OADSubBlip : OCDDelayedMedia {

	int mType;
	NSData* mData;
	CGSize mSizeInPoints;
	int mSizeInBytes;
	CGRect mFrame;

}
-(int)sizeInBytes;
-(CGRect)frame;
-(id)data;
-(void)setType:(int)arg1 ;
-(BOOL)isLoaded;
-(unsigned long long)hash;
-(int)type;
-(void)setData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSizeInBytes:(int)arg1 ;
-(id)initWithData:(id)arg1 type:(int)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeInPoints;
-(void)setSizeInPoints:(CGSize)arg1 ;
@end

