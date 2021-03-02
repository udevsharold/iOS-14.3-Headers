/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSMutableDictionary;

@interface SKActionTable : NSObject <NSSecureCoding> {

	NSDictionary* _actionTableDictionary;
	NSMutableDictionary* __info;

}

@property (nonatomic,retain,readonly) NSDictionary * actionTableDictionary;              //@synthesize actionTableDictionary=_actionTableDictionary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _info;                                //@synthesize _info=__info - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)actionTableWithContentsOfDictionary:(id)arg1 ;
-(void)set_info:(NSMutableDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSMutableDictionary *)_info;
-(id)initWithContentsOfDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)actionForName:(id)arg1 ;
-(NSDictionary *)actionTableDictionary;
-(BOOL)isEqualToActionTable:(id)arg1 ;
@end
