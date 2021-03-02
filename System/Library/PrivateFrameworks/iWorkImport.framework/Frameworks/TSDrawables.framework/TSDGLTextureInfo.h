/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSDrawables/TSDrawables-Structs.h>
@interface TSDGLTextureInfo : NSObject {

	BOOL _containsMipmaps;
	unsigned _name;
	unsigned _target;
	unsigned _height;
	unsigned _width;

}

@property (nonatomic,readonly) BOOL containsMipmaps;              //@synthesize containsMipmaps=_containsMipmaps - In the implementation block
@property (nonatomic,readonly) unsigned name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned target;                   //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) unsigned height;                   //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) unsigned width;                    //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) CGSize size; 
+(id)textureInfoWithName:(unsigned)arg1 target:(unsigned)arg2 width:(unsigned)arg3 height:(unsigned)arg4 containsMipmaps:(BOOL)arg5 ;
-(unsigned)width;
-(unsigned)height;
-(unsigned)target;
-(void)teardown;
-(CGSize)size;
-(id)description;
-(unsigned)name;
-(BOOL)containsMipmaps;
-(id)initWithName:(unsigned)arg1 target:(unsigned)arg2 width:(unsigned)arg3 height:(unsigned)arg4 containsMipmaps:(BOOL)arg5 ;
@end
