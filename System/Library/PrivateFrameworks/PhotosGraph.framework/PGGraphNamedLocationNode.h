/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphLocationNode.h>

@class NSString;

@interface PGGraphNamedLocationNode : PGGraphLocationNode {

	NSString* _name;
	NSString* _uuid;

}

@property (nonatomic,retain) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * UUID;              //@synthesize uuid=_uuid - In the implementation block
-(void)setUUID:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithLabel:(id)arg1 ;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(NSString *)UUID;
-(unsigned short)domain;
-(id)description;
-(void)setLocalProperties:(id)arg1 ;
-(NSString *)name;
-(BOOL)hasProperties:(id)arg1 ;
-(id)propertyDictionary;
@end
