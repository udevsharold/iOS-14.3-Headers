/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>

@class NSData, NSString;

@interface CLSBlob : CLSObject <CLSRelationable> {

	int _type;
	NSData* _data;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSData * data;                         //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)relations;
-(NSData *)data;
-(id)initWithType:(int)arg1 data:(id)arg2 ;
-(void)setType:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)type;
-(void)setData:(NSData *)arg1 ;
-(id)_init;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)validateObject:(id*)arg1 ;
@end

