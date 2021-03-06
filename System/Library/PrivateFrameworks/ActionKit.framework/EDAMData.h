/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSData, NSNumber;

@interface EDAMData : FATObject {

	NSData* _bodyHash;
	NSNumber* _size;
	NSData* _body;

}

@property (nonatomic,retain) NSData * bodyHash;              //@synthesize bodyHash=_bodyHash - In the implementation block
@property (nonatomic,retain) NSNumber * size;                //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSData * body;                  //@synthesize body=_body - In the implementation block
+(id)structName;
+(id)structFields;
-(NSData *)body;
-(void)setBody:(NSData *)arg1 ;
-(void)setSize:(NSNumber *)arg1 ;
-(NSNumber *)size;
-(NSData *)bodyHash;
-(void)setBodyHash:(NSData *)arg1 ;
@end

