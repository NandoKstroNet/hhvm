/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef incl_HPHP_TEST_EXT_IMAGE_H_
#define incl_HPHP_TEST_EXT_IMAGE_H_

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <test/test_cpp_ext.h>

///////////////////////////////////////////////////////////////////////////////

class TestExtImage : public TestCppExt {
 public:
  virtual bool RunTests(const std::string &which);

  bool test_gd_info();
  bool test_getimagesize();
  bool test_image_type_to_extension();
  bool test_image_type_to_mime_type();
  bool test_image2wbmp();
  bool test_imagealphablending();
  bool test_imageantialias();
  bool test_imagearc();
  bool test_imagechar();
  bool test_imagecharup();
  bool test_imagecolorallocate();
  bool test_imagecolorallocatealpha();
  bool test_imagecolorat();
  bool test_imagecolorclosest();
  bool test_imagecolorclosestalpha();
  bool test_imagecolorclosesthwb();
  bool test_imagecolordeallocate();
  bool test_imagecolorexact();
  bool test_imagecolorexactalpha();
  bool test_imagecolormatch();
  bool test_imagecolorresolve();
  bool test_imagecolorresolvealpha();
  bool test_imagecolorset();
  bool test_imagecolorsforindex();
  bool test_imagecolorstotal();
  bool test_imagecolortransparent();
  bool test_imageconvolution();
  bool test_imagecopy();
  bool test_imagecopymerge();
  bool test_imagecopymergegray();
  bool test_imagecopyresampled();
  bool test_imagecopyresized();
  bool test_imagecreate();
  bool test_imagecreatefromgd2part();
  bool test_imagecreatefromgd();
  bool test_imagecreatefromgd2();
  bool test_imagecreatefromgif();
  bool test_imagecreatefromjpeg();
  bool test_imagecreatefrompng();
  bool test_imagecreatefromstring();
  bool test_imagecreatefromwbmp();
  bool test_imagecreatefromxbm();
  bool test_imagecreatefromxpm();
  bool test_imagecreatetruecolor();
  bool test_imagedashedline();
  bool test_imagedestroy();
  bool test_imageellipse();
  bool test_imagefill();
  bool test_imagefilledarc();
  bool test_imagefilledellipse();
  bool test_imagefilledpolygon();
  bool test_imagefilledrectangle();
  bool test_imagefilltoborder();
  bool test_imagefilter();
  bool test_imagefontheight();
  bool test_imagefontwidth();
  bool test_imageftbbox();
  bool test_imagefttext();
  bool test_imagegammacorrect();
  bool test_imagegd2();
  bool test_imagegd();
  bool test_imagegif();
  bool test_imagegrabscreen();
  bool test_imagegrabwindow();
  bool test_imageinterlace();
  bool test_imageistruecolor();
  bool test_imagejpeg();
  bool test_imagelayereffect();
  bool test_imageline();
  bool test_imageloadfont();
  bool test_imagepalettecopy();
  bool test_imagepng();
  bool test_imagepolygon();
  bool test_imagepsbbox();
  bool test_imagepsencodefont();
  bool test_imagepsextendfont();
  bool test_imagepsfreefont();
  bool test_imagepsloadfont();
  bool test_imagepsslantfont();
  bool test_imagepstext();
  bool test_imagerectangle();
  bool test_imagerotate();
  bool test_imagesavealpha();
  bool test_imagesetbrush();
  bool test_imagesetpixel();
  bool test_imagesetstyle();
  bool test_imagesetthickness();
  bool test_imagesettile();
  bool test_imagestring();
  bool test_imagestringup();
  bool test_imagesx();
  bool test_imagesy();
  bool test_imagetruecolortopalette();
  bool test_imagettfbbox();
  bool test_imagettftext();
  bool test_imagetypes();
  bool test_imagewbmp();
  bool test_imagexbm();
  bool test_iptcembed();
  bool test_iptcparse();
  bool test_jpeg2wbmp();
  bool test_png2wbmp();
  bool test_exif_imagetype();
  bool test_exif_read_data();
  bool test_read_exif_data();
  bool test_exif_tagname();
  bool test_exif_thumbnail();
};

///////////////////////////////////////////////////////////////////////////////

#endif // incl_HPHP_TEST_EXT_IMAGE_H_
